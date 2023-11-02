
@interface SGCalendarAttachmentDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {
    SGAccountsAdapter * _accountsAdapter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)baseAttachmentFrom:(id)arg1 includingEvents:(id)arg2 withRanges:(id)arg3;
+ (long long)replaceTzid:(id)arg1 inDocument:(id)arg2 fromOriginal:(id)arg3 withBaseLength:(unsigned long long)arg4 withEventRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
+ (id)splitAttachment:(id)arg1 intoEvents:(id)arg2 withTimezones:(id)arg3;

- (void).cxx_destruct;
- (void)_dissectMessage:(id)arg1 entity:(id)arg2;
- (struct SGMEventICSSourceType_ { unsigned long long x1; })accountTypeFor:(id)arg1;
- (void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (id)downloadedCalendarAttachmentsFrom:(id)arg1;
- (id)enrichmentsFromData:(id)arg1 inDocument:(id)arg2 parentMessage:(id)arg3 parentEntity:(id)arg4;
- (bool)hasCalendarAccountForOneOf:(id)arg1;
- (id)init;
- (bool)shouldIgnoreEntity:(id)arg1;

@end
