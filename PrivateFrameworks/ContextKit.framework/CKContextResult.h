
@interface CKContextResult : NSObject <NSCopying, NSSecureCoding> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _absoluteOriginOnScreen;
    NSArray * _associatedResults;
    NSString * _category;
    NSString * _debug;
    bool  _exactMatch;
    NSDictionary * _extractedAddressComponents;
    NSDateComponents * _extractedEndDateComponents;
    NSDateComponents * _extractedStartDateComponents;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frameInWindow;
    long long  _minPrefix;
    bool  _onScreen;
    NSString * _query;
    NSOrderedSet * _relatedItems;
    NSString * _sceneIdentifier;
    NSSet * _tags;
    NSString * _title;
    NSString * _topicId;
    NSURL * _url;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } absoluteOriginOnScreen;
@property (nonatomic, copy) NSArray *associatedResults;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *debug;
@property (getter=isExactMatch, nonatomic) bool exactMatch;
@property (nonatomic, copy) NSDictionary *extractedAddressComponents;
@property (nonatomic, copy) NSDateComponents *extractedEndDateComponents;
@property (nonatomic, copy) NSDateComponents *extractedStartDateComponents;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameInWindow;
@property (nonatomic) long long minPrefix;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (nonatomic, copy) NSString *portraitId;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, copy) NSOrderedSet *relatedItems;
@property (nonatomic, copy) NSString *sceneIdentifier;
@property (nonatomic, copy) NSSet *tags;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *topicId;
@property (nonatomic, copy) NSURL *url;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })absoluteOriginOnScreen;
- (id)associatedResults;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debug;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extractedAddressComponents;
- (id)extractedEndDateComponents;
- (id)extractedStartDateComponents;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInWindow;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 query:(id)arg2 url:(id)arg3 category:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isExactMatch;
- (bool)isOnScreen;
- (long long)minPrefix;
- (id)portraitId;
- (id)query;
- (id)relatedItems;
- (id)sceneIdentifier;
- (void)setAbsoluteOriginOnScreen:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAssociatedResults:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setDebug:(id)arg1;
- (void)setExactMatch:(bool)arg1;
- (void)setExtractedAddressComponents:(id)arg1;
- (void)setExtractedEndDateComponents:(id)arg1;
- (void)setExtractedStartDateComponents:(id)arg1;
- (void)setFrameInWindow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMinPrefix:(long long)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)setPortraitId:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setRelatedItems:(id)arg1;
- (void)setSceneIdentifier:(id)arg1;
- (void)setTags:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopicId:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)tags;
- (id)title;
- (id)toJSONSerializableDictionary;
- (id)topicId;
- (id)url;

@end
