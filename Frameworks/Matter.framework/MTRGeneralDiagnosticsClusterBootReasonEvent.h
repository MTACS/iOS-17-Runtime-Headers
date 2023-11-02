
@interface MTRGeneralDiagnosticsClusterBootReasonEvent : NSObject <NSCopying> {
    NSNumber * _bootReason;
}

@property (nonatomic, copy) NSNumber *bootReason;

- (void).cxx_destruct;
- (id)bootReason;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (void)setBootReason:(id)arg1;

@end
