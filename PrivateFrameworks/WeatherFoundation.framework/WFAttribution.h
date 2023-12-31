
@interface WFAttribution : NSObject

@property (readonly) NSString *localizedSourceAttribution;
@property (readonly) NSURL *sourceAttributionURL;
@property (readonly) NSString *sourceName;

+ (id)platformSpecializedWeatherSourceAttributionURLForTrafficParameter:(id)arg1;
+ (id)sharedAttribution;
+ (id)weatherSourceAttributionURLForTrafficParameter:(id)arg1;

- (id)localizedSourceAttribution;
- (id)sourceAttributionImageForStyle:(unsigned long long)arg1;
- (id)sourceAttributionURL;
- (id)sourceName;

@end
