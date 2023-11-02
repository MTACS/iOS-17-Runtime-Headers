
@interface TUIntentController : NSObject {
    <TUHandleContactProvider> * _contactProvider;
}

@property (nonatomic, readonly) <TUHandleContactProvider> *contactProvider;

+ (id)tu_INPersonHandleForTUHandle:(id)arg1 label:(id)arg2;
+ (long long)tu_INPersonHandleTypeForTUHandleType:(long long)arg1;

- (void).cxx_destruct;
- (id)contactProvider;
- (id)initWithContactProvider:(id)arg1;
- (id)personsByHandleForHandles:(id)arg1;
- (id)startCallIntentByHandleForHandles:(id)arg1 capability:(long long)arg2 destinationType:(long long)arg3;
- (id)voicemailStartCallIntentByHandleForHandles:(id)arg1;

@end
