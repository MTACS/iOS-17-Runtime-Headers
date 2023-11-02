
@interface SXSubscriptionButtonComponentTextProvider : NSObject <SXButtonComponentTextProvider> {
    <SXSubscriptionButtonTextProviding> * _textProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXSubscriptionButtonTextProviding> *textProvider;

- (void).cxx_destruct;
- (id)initWithTextProvider:(id)arg1;
- (id)textForComponent:(id)arg1;
- (id)textProvider;

@end
