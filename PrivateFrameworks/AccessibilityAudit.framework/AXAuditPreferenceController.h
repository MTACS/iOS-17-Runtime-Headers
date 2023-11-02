
@interface AXAuditPreferenceController : NSObject {
    NSMutableDictionary * _preferenceDictionary;
}

@property (nonatomic, retain) NSMutableDictionary *preferenceDictionary;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)preferenceDictionary;
- (void)setPreferenceDictionary:(id)arg1;
- (void)setSpinRunloop:(bool)arg1;
- (bool)spinRunloop;

@end
