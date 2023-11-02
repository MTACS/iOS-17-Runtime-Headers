
@interface SGUIIconSupport : NSObject

+ (id)_homeScreenDescriptorWithBorder:(bool)arg1;
+ (id)_iconImageWithBundleIdentifier:(id)arg1 imageDescriptor:(id)arg2;
+ (id)_imageWithIcon:(id)arg1 imageDescriptor:(id)arg2;
+ (id)_spotlightDescriptorWithBorder:(bool)arg1;
+ (id)homeScreenIconImageWithBundleIdentifier:(id)arg1;
+ (id)homeScreenIconImageWithBundleIdentifier:(id)arg1 drawBorder:(bool)arg2;
+ (id)iconForCalendarDate:(id)arg1;
+ (id)iconForCalendarDate:(id)arg1 drawBorder:(bool)arg2;
+ (id)spotlightIconImageWithBundleIdentifier:(id)arg1;
+ (id)spotlightIconImageWithBundleIdentifier:(id)arg1 drawBorder:(bool)arg2;

@end
