
@interface CDPManateeStateController : NSObject {
    <CDPDCircleProxy> * _circleProxy;
    CDPContext * _context;
}

- (void).cxx_destruct;
- (bool)_checkCircleStateWithError:(id*)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 circleProxy:(id)arg2;
- (bool)isManateeAvailable:(id*)arg1;

@end
