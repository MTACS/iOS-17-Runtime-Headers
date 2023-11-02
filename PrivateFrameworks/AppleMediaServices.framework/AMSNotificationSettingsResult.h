
@interface AMSNotificationSettingsResult : NSObject {
    NSArray * _sections;
}

@property (nonatomic, readonly) NSArray *sections;

+ (id)_sectionsFromDictionaryRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)sections;

@end
