
@interface WFRemoteWidgetConfigurationLocalizedIntentResponse : WFRemoteWidgetConfigurationResponse {
    NSString * _languageCode;
    INIntent * _localizedIntent;
    NSData * _localizedIntentData;
}

@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) INIntent *localizedIntent;
@property (nonatomic, retain) NSData *localizedIntentData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedIntentRepresentation:(id)arg1 languageCode:(id)arg2 error:(id)arg3;
- (id)languageCode;
- (id)localizedIntent;
- (id)localizedIntentData;
- (void)setLocalizedIntentData:(id)arg1;

@end
