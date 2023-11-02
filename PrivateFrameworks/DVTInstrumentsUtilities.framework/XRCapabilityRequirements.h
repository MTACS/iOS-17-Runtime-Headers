
@interface XRCapabilityRequirements : NSObject {
    NSMutableDictionary * _capabilities;
    NSMutableDictionary * _unimplementedResponses;
}

+ (id)requirementsFromContext:(id)arg1;
+ (id)requirementsFromPlist:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkRequirementsAgainstRegistery:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)plistRepresentation;

@end
