
@interface BRCErrorGrouping : NSObject <NSCopying> {
    NSError * _error;
    bool  _isPCSChained;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool isPCSChained;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)error;
- (unsigned long long)hash;
- (id)initWithError:(id)arg1 pcsChained:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToErrorGrouping:(id)arg1;
- (bool)isPCSChained;

@end
