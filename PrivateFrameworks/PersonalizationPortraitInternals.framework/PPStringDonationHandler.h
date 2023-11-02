
@interface PPStringDonationHandler : NSObject <PPStringDonationProtocol> {
    PPSWStringDonationConsumer * _consumer;
}

- (void).cxx_destruct;
- (void)donateLabeledStrings:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 documentId:(id)arg4 completion:(id /* block */)arg5;
- (id)init;
- (id)initWithTopicStore:(id)arg1 entityStore:(id)arg2 topicDissector:(id)arg3 entityDissector:(id)arg4;

@end
