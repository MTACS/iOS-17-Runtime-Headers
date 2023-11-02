
@interface _SFAnalysisContextCodingObject : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _contextualNamedEntities;
    NSArray * _contextualStrings;
    NSString * _geoLMRegionID;
    NSArray * _leftContext;
    NSArray * _rightContext;
    NSArray * _selectedText;
}

@property (nonatomic, readonly, copy) NSArray *contextualNamedEntities;
@property (nonatomic, readonly, copy) NSArray *contextualStrings;
@property (nonatomic, readonly, copy) NSString *geoLMRegionID;
@property (nonatomic, readonly, copy) NSArray *leftContext;
@property (nonatomic, readonly, copy) NSArray *rightContext;
@property (nonatomic, readonly, copy) NSArray *selectedText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contextualNamedEntities;
- (id)contextualStrings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)geoLMRegionID;
- (id)initWithCoder:(id)arg1;
- (id)initWithLeftContext:(id)arg1 rightContext:(id)arg2 selectedText:(id)arg3 geoLMRegionID:(id)arg4 contextualStrings:(id)arg5 contextualNamedEntities:(id)arg6;
- (id)leftContext;
- (id)rightContext;
- (id)selectedText;

@end
