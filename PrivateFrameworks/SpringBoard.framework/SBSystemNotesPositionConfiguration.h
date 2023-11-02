
@interface SBSystemNotesPositionConfiguration : NSObject {
    bool  _edgeProtectEnabled;
    unsigned long long  _position;
}

@property (nonatomic) bool edgeProtectEnabled;
@property (nonatomic) unsigned long long position;

- (bool)edgeProtectEnabled;
- (id)initWithEdgeProtectEnabled:(bool)arg1 position:(unsigned long long)arg2;
- (unsigned long long)position;
- (void)setEdgeProtectEnabled:(bool)arg1;
- (void)setPosition:(unsigned long long)arg1;

@end
