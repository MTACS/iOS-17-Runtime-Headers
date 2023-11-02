
@interface EXBDisplayAssertionPreferences : NSObject <NSCopying> {
    unsigned long long  _cloneMirroringMode;
    NSString * _disableSystemIdleSleepReason;
    EXBDisplayArrangementItem * _displayArrangement;
    bool  _wantsControlOfDisplay;
}

@property (nonatomic) unsigned long long cloneMirroringMode;
@property (nonatomic, copy) NSString *disableSystemIdleSleepReason;
@property (nonatomic, retain) EXBDisplayArrangementItem *displayArrangement;
@property (nonatomic) bool wantsControlOfDisplay;

- (void).cxx_destruct;
- (unsigned long long)cloneMirroringMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)disableSystemIdleSleepReason;
- (id)displayArrangement;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setCloneMirroringMode:(unsigned long long)arg1;
- (void)setDisableSystemIdleSleepReason:(id)arg1;
- (void)setDisplayArrangement:(id)arg1;
- (void)setWantsControlOfDisplay:(bool)arg1;
- (bool)wantsControlOfDisplay;

@end
