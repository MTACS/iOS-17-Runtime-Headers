
@interface CalLocationAuthorizationStatus : NSObject {
    unsigned long long  _precision;
    int  _status;
}

@property (nonatomic, readonly) unsigned long long precision;
@property (nonatomic, readonly) int status;

- (id)initWithStatus:(int)arg1 precision:(unsigned long long)arg2;
- (unsigned long long)precision;
- (int)status;

@end
