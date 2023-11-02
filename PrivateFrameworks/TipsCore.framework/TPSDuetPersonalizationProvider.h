
@interface TPSDuetPersonalizationProvider : NSObject

+ (id)_personalizedStringsForType:(long long)arg1 count:(unsigned long long)arg2 duetDataProvider:(id)arg3 error:(id*)arg4;
+ (id)contactFromIntentForSiriTipSendMessage:(id)arg1;
+ (id)contactFromIntentSiriTipStartCall:(id)arg1;
+ (id)nameFromRecipients:(id)arg1;
+ (id)personalizedStringsForType:(long long)arg1 count:(unsigned long long)arg2 error:(id*)arg3;
+ (id)personalizedStringsForType:(long long)arg1 error:(id*)arg2;

@end
