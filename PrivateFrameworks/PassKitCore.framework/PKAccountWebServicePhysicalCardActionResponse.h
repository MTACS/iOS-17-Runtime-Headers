
@interface PKAccountWebServicePhysicalCardActionResponse : PKAccountWebServiceResponse {
    NSSet * _updatedPhysicalCards;
}

@property (nonatomic, readonly) NSSet *updatedPhysicalCards;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)updatedPhysicalCards;

@end
