
@interface SiriMessageTypes.MitigationDecisionFinalizedMessage : SiriMessageTypes.RequestMessageBase {
    void isMitigated;
}

@property (nonatomic, readonly) NSString *description;

- (id)description;

@end
