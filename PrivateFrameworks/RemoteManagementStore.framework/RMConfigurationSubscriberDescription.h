
@interface RMConfigurationSubscriberDescription : NSObject {
    NSArray * _types;
}

@property (nonatomic, readonly, copy) NSArray *types;

+ (id)descriptionWithEventsDictionary:(id)arg1;
+ (id)descriptionWithServiceDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTypes:(id)arg1;
- (id)types;

@end
