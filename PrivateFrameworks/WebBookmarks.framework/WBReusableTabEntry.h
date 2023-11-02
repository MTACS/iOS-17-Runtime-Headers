
@interface WBReusableTabEntry : NSObject {
    NSDate * _dateCreated;
    <WBReusableTab> * _reusableTab;
}

@property (nonatomic, readonly) NSDate *dateCreated;
@property (nonatomic, readonly) <WBReusableTab> *reusableTab;

- (void).cxx_destruct;
- (id)dateCreated;
- (id)initWithReusableTab:(id)arg1;
- (id)reusableTab;

@end
