
@interface HFSiriAssetDownloadNetworkManager : NSObject <COMessageSessionProducerDelegate> {
    void channel;
    void memberReply;
    void memberStatus;
    void sadlog;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)channel:(id)arg1 didAddProducer:(id)arg2;
- (void)channel:(id)arg1 didFailToAddProducerWithSubTopic:(id)arg2 error:(id)arg3;
- (unsigned long long)immediateStatusForIdentifierWithUuidstr:(id)arg1;
- (id)init;
- (void)producer:(id)arg1 didFailToStartSessionWithMember:(id)arg2 error:(id)arg3;
- (void)producer:(id)arg1 didStartSession:(id)arg2 member:(id)arg3 response:(id)arg4;
- (void)producer:(id)arg1 didStopSession:(id)arg2 initiator:(id)arg3 notice:(id)arg4 error:(id)arg5;
- (void)producer:(void *)arg1 shouldStartSessionWithMember:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 74: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned char, bycopy /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, short, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, unsigned short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, short, int, out in /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, const out double, /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned char, bycopy unsigned char, long, /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: unhandled bit fieldencoding: 'b' */ unsigned int, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, out long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, unsigned short, in /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*, out /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned char, bycopy /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, short, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, unsigned short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, short, int, out in byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, long long, /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)requestStatus:(id)arg1;
- (void)statusForIdentifierWithUuidstr:(id)arg1 replyHandler:(id /* block */)arg2;

@end
