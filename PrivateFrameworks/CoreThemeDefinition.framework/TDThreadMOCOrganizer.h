
@interface TDThreadMOCOrganizer : NSObject {
    CoreThemeDocument * document;
    NSThread * mainThread;
}

- (id)document;
- (id)init;
- (id)initWithDocument:(id)arg1 mainThread:(id)arg2;
- (id)mainMOC;
- (id)mainThread;
- (void)setThreadMOC:(id)arg1;
- (id)threadMOC;

@end
