
@interface PromotedContent.PrimitiveCreator : NSObject <APMetricPrimitiveCreating> {
    void branches;
    void contextIdentifier;
    void environment;
    void journeyIdentifier;
    void placeholder;
    void promotedContentIdentifier;
    void receiver;
}

- (void).cxx_destruct;
- (id)init;
- (void)recordMetric:(long long)arg1 forPurpose:(long long)arg2 properties:(id)arg3 internalProperties:(id)arg4 order:(long long)arg5 options:(long long)arg6;

@end
