
@interface _MPCQCBMSessionTypeInfo2 : NSObject {
    MPCPlaybackAccount * _account;
    bool  _exportable;
    NSString * _exportableReason;
    NSString * _identifier;
    bool  _supported;
    NSString * _supportedReason;
}

@property (nonatomic, copy) MPCPlaybackAccount *account;
@property (nonatomic) bool exportable;
@property (nonatomic, copy) NSString *exportableReason;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool supported;
@property (nonatomic, copy) NSString *supportedReason;

+ (id)infoWithIdentifier:(id)arg1 account:(id)arg2 supported:(bool)arg3 supportedReason:(id)arg4 exportable:(bool)arg5 exportableReason:(id)arg6;

- (void).cxx_destruct;
- (id)account;
- (bool)exportable;
- (id)exportableReason;
- (id)identifier;
- (void)setAccount:(id)arg1;
- (void)setExportable:(bool)arg1;
- (void)setExportableReason:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSupported:(bool)arg1;
- (void)setSupportedReason:(id)arg1;
- (bool)supported;
- (id)supportedReason;

@end
