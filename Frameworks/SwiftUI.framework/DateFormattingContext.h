
@interface DateFormattingContext : NSObject {
    bool  _isLuminanceReduced;
    NSDate * _referenceDate;
}

@property (nonatomic, readonly) bool isLuminanceReduced;
@property (nonatomic, readonly) NSDate *referenceDate;

- (void).cxx_destruct;
- (id)init;
- (id)initWithReferenceDate:(id)arg1 isLuminanceReduced:(bool)arg2;
- (bool)isLuminanceReduced;
- (id)referenceDate;

@end
