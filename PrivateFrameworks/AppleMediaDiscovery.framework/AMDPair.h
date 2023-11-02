
@interface AMDPair : NSObject {
    id  _firstElement;
    id  _secondElement;
}

@property (nonatomic, retain) id firstElement;
@property (nonatomic, retain) id secondElement;

- (void).cxx_destruct;
- (id)first;
- (id)firstElement;
- (id)initWith:(id)arg1 and:(id)arg2;
- (id)second;
- (id)secondElement;
- (void)setFirstElement:(id)arg1;
- (void)setSecondElement:(id)arg1;

@end
