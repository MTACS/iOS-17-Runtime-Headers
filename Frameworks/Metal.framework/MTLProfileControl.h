
@interface MTLProfileControl : NSObject <NSCopying> {
    unsigned char  _uscCliqueTraceLevel;
    bool  _uscEmitPosition;
    bool  _uscEmitThreadControlFlow;
}

@property (nonatomic) unsigned char uscCliqueTraceLevel;
@property (nonatomic) bool uscEmitPosition;
@property (nonatomic) bool uscEmitThreadControlFlow;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setUscCliqueTraceLevel:(unsigned char)arg1;
- (void)setUscEmitPosition:(bool)arg1;
- (void)setUscEmitThreadControlFlow:(bool)arg1;
- (unsigned char)uscCliqueTraceLevel;
- (bool)uscEmitPosition;
- (bool)uscEmitThreadControlFlow;

@end
