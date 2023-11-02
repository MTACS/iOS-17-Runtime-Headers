
@interface _UIActivityItemCustomizationGroup : NSObject {
    NSArray * _customizations;
    NSString * _identifier;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSArray *customizations;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;

// Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet

- (void).cxx_destruct;
- (id)_initGroupWithName:(id)arg1 identifier:(id)arg2 customizations:(id)arg3;
- (id)customizations;
- (id)identifier;
- (id)name;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

+ (id)createWithGroupName:(id)arg1 identifier:(id)arg2 customizations:(id)arg3;

@end
