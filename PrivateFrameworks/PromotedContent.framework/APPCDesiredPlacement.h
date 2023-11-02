
@interface APPCDesiredPlacement : NSObject <APPCPromotableDesiredPlacement> {
    void count;
    void type;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long type;

- (long long)count;
- (id)init;
- (id)initWithType:(long long)arg1 count:(long long)arg2;
- (long long)type;

@end
