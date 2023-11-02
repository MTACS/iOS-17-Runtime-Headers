
@interface SFTrustEvaluator_Ivars : NSObject {
    NSArray * applicationAnchorCertificates;
    SFRevocationPolicy * revocationPolicy;
    struct { 
        unsigned int allowCertificateFetching : 1; 
        unsigned int trustSystemAnchorCertificates : 1; 
    }  trustEvaluatorFlags;
    SFTrustPolicy * trustPolicy;
}

- (void).cxx_destruct;

@end
