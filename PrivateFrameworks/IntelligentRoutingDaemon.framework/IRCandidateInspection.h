
@interface IRCandidateInspection : NSObject {
    IRCandidateInspectionGenerator * _inspectionGenerator;
    IRCandidateInspectionServicePackage * _inspectionServicePackage;
}

@property (nonatomic, readonly) IRCandidateInspectionGenerator *inspectionGenerator;
@property (nonatomic, readonly) IRCandidateInspectionServicePackage *inspectionServicePackage;

- (void).cxx_destruct;
- (id)exportCandidateInspectionAsDictionary;
- (id)getCandidateIdentifier;
- (long long)getClassification;
- (id)getClassificationDescription;
- (id)initWithInspectionGenerator:(id)arg1;
- (id)initWithInspectionServicePackage:(id)arg1;
- (id)inspectionGenerator;
- (id)inspectionServicePackage;

@end
