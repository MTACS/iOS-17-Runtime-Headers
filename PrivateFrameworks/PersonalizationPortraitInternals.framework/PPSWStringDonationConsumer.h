
@interface PPSWStringDonationConsumer : PersonalizationPortraitInternals.Consumer

- (void)consumeWithDonation:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 20: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, unsigned short, /* Warning: Unrecognized filer type: 'W' using 'void*' */ void*, unsigned short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const int, in /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, long double, out in /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)init;
- (id)initWithTopicStore:(id)arg1 entityStore:(id)arg2 locationStore:(id)arg3 entityDissector:(id)arg4 topicDissector:(id)arg5;
- (id)initWithTopicStore:(id)arg1 entityStore:(id)arg2 locationStore:(id)arg3 writebackDissector:(id)arg4 entityDissector:(id)arg5 topicDissector:(id)arg6;

@end
