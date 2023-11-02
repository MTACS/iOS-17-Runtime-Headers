
@interface WFOnScreenContentNode : NSObject <NSSecureCoding> {
    NSURL * _URL;
    NSString * _applicationBundleIdentifier;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _applicationFrame;
    NSNumber * _applicationLevel;
    NSString * _chatRegistryContinuityKey;
    NSArray * _children;
    NSString * _contactIdentifier;
    WFContentItem * _contentItem;
    INFile * _file;
    NSString * _photoAssetIdentifier;
    NSString * _source;
    NSString * _string;
    FPSandboxingURLWrapper * _wrapper;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } applicationFrame;
@property (nonatomic, readonly) NSNumber *applicationLevel;
@property (nonatomic, retain) NSString *chatRegistryContinuityKey;
@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) WFContentItem *contentItem;
@property (nonatomic, readonly) INFile *file;
@property (nonatomic, readonly) NSString *photoAssetIdentifier;
@property (nonatomic, readonly) NSString *source;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) FPSandboxingURLWrapper *wrapper;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (void)addChild:(id)arg1;
- (void)addChildren:(id)arg1;
- (id)applicationBundleIdentifier;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })applicationFrame;
- (id)applicationLevel;
- (id)chatRegistryContinuityKey;
- (id)children;
- (id)contactIdentifier;
- (id)contentItem;
- (void)encodeWithCoder:(id)arg1;
- (id)file;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentItem:(id)arg1 file:(id)arg2 applicationBundleIdentifier:(id)arg3 applicationFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 applicationLevel:(id)arg5 source:(id)arg6;
- (id)initWithContentItem:(id)arg1 file:(id)arg2 applicationBundleIdentifier:(id)arg3 source:(id)arg4;
- (id)initWithURLWrapper:(id)arg1 applicationBundleIdentifier:(id)arg2 source:(id)arg3;
- (id)photoAssetIdentifier;
- (void)populateObjectsFromContentItem:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)setChatRegistryContinuityKey:(id)arg1;
- (id)source;
- (id)string;
- (id)wrapper;

@end
