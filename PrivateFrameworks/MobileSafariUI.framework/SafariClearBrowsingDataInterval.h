
@interface SafariClearBrowsingDataInterval : NSObject {
    long long  _clearBrowsingDataInterval;
    id /* block */  _dateAfterWhichDataShouldBeClearedBlock;
    NSString * _descriptionOfInterval;
}

@property (nonatomic) long long clearBrowsingDataInterval;
@property (nonatomic, copy) id /* block */ dateAfterWhichDataShouldBeClearedBlock;
@property (readonly) NSString *descriptionOfInterval;

- (void).cxx_destruct;
- (long long)clearBrowsingDataInterval;
- (id /* block */)dateAfterWhichDataShouldBeClearedBlock;
- (id)description;
- (id)descriptionOfInterval;
- (id)init;
- (id)initWithDescription:(id)arg1 dateAfterWhichDataShouldBeClearedBlock:(id /* block */)arg2;
- (void)setClearBrowsingDataInterval:(long long)arg1;
- (void)setDateAfterWhichDataShouldBeClearedBlock:(id /* block */)arg1;

@end
