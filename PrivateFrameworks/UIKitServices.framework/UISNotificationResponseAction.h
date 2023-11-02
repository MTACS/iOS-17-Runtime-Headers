
@interface UISNotificationResponseAction : BSAction {
    UNNotificationResponse * _response;
}

@property (nonatomic, readonly) bool isDefaultAction;
@property (nonatomic, readonly) bool isLocal;
@property (nonatomic, readonly) bool isRemote;
@property (nonatomic, readonly, retain) UNNotificationResponse *response;

- (void).cxx_destruct;
- (long long)UIActionType;
- (id)_trigger;
- (id)initWithResponse:(id)arg1 withHandler:(id /* block */)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isDefaultAction;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isLocal;
- (bool)isRemote;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)response;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
