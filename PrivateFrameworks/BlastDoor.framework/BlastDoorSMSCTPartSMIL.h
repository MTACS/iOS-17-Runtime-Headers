
@interface BlastDoorSMSCTPartSMIL : NSObject {
    void sMSCTPartSMIL;
}

@property (nonatomic, readonly) NSAttributedString *contentBody;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *orderedParts;

- (void).cxx_destruct;
- (id)contentBody;
- (id)description;
- (id)init;
- (id)orderedParts;

@end
