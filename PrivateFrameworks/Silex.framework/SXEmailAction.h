
@interface SXEmailAction : NSObject <SXAction> {
    NSString * _recipient;
    NSString * _subject;
    SXJSONDictionary * analytics;
}

@property (nonatomic, readonly) SXJSONDictionary *analytics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *recipient;
@property (nonatomic, readonly) NSString *subject;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)analytics;
- (id)initWithRecipient:(id)arg1 subject:(id)arg2;
- (id)recipient;
- (id)subject;
- (id)type;

@end
