
@interface PKAccountWebServicePhysicalCardsResponse : PKAccountWebServiceResponse {
    NSSet * _physicalCards;
}

@property (nonatomic, readonly) NSSet *physicalCards;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)physicalCards;

@end
