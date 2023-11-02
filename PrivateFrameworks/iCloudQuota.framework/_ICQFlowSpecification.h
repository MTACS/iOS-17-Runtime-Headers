
@interface _ICQFlowSpecification : NSObject {
    NSDictionary * _pagesByIdentifier;
    _ICQAlertSpecification * _startAlert;
    _ICQPageSpecification * _startPage;
}

@property (nonatomic, readonly) NSDictionary *pagesByIdentifier;
@property (nonatomic, retain) _ICQAlertSpecification *startAlert;
@property (nonatomic, readonly) _ICQPageSpecification *startPage;

- (void).cxx_destruct;
- (id)initWithPages:(id)arg1;
- (id)pagesByIdentifier;
- (void)setStartAlert:(id)arg1;
- (id)startAlert;
- (id)startPage;

@end
