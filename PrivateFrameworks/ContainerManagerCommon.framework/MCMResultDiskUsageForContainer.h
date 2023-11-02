
@interface MCMResultDiskUsageForContainer : MCMResultBase {
    unsigned long long  _containerClass;
    unsigned long long  _descendants;
    unsigned long long  _diskUsageBytes;
    int  _personaType;
}

@property (nonatomic) unsigned long long containerClass;
@property (nonatomic) unsigned long long descendants;
@property (nonatomic) unsigned long long diskUsageBytes;
@property (nonatomic) int personaType;

+ (id)_reportingWorkloop;

- (void)_report;
- (unsigned long long)_roundToTwoSignificantDigitsWithNumber:(unsigned long long)arg1;
- (unsigned long long)containerClass;
- (unsigned long long)descendants;
- (unsigned long long)diskUsageBytes;
- (bool)encodeResultOntoReply:(id)arg1;
- (id)initWithDiskUsageBytes:(unsigned long long)arg1 descendants:(unsigned long long)arg2 containerClass:(unsigned long long)arg3 personaType:(int)arg4;
- (int)personaType;
- (void)setContainerClass:(unsigned long long)arg1;
- (void)setDescendants:(unsigned long long)arg1;
- (void)setDiskUsageBytes:(unsigned long long)arg1;
- (void)setPersonaType:(int)arg1;

@end
