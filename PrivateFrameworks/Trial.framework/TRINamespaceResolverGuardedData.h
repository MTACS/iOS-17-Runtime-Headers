
@interface TRINamespaceResolverGuardedData : NSObject {
    bool  hasIssuedWarnings;
    NSDictionary * plplist;
    NSMutableDictionary * targetedBMLTDeploymentMap;
    NSMutableDictionary * targetedExperimentDeploymentMap;
    NSMutableDictionary * targetedRolloutDeploymentMap;
}

- (void).cxx_destruct;

@end
