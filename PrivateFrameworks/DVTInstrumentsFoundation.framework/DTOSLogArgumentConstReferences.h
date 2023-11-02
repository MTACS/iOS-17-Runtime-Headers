
@interface DTOSLogArgumentConstReferences : NSObject {
    DTOSLogStackReferenceWrapper * etype;
    DTOSLogStackReferenceWrapper * name;
    DTOSLogStackReferenceWrapper * prefix;
    bool  skipped;
    DTOSLogStackReferenceWrapper * stringVal;
    DTOSLogStackReferenceWrapper * tmpArgStruct;
    unsigned short  typeID;
}

- (void).cxx_destruct;

@end
