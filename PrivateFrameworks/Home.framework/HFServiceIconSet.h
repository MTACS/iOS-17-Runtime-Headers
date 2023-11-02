
@interface HFServiceIconSet : NSObject {
    NSSet * _allIcons;
    <HFIconDescriptor> * _defaultIcon;
}

@property (nonatomic, readonly) NSSet *allIcons;
@property (nonatomic, readonly) <HFIconDescriptor> *defaultIcon;

+ (id)placeholderIconSet;
+ (id)setWithDefaultIcon:(id)arg1;
+ (id)setWithDefaultIcon:(id)arg1 alternateIcons:(id)arg2;
+ (id)setWithImageIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)allIcons;
- (id)defaultIcon;

@end
