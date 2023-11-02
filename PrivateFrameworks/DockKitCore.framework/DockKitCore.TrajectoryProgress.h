
@interface DockKitCore.TrajectoryProgress : NSObject <NSCopying> {
    void actual;
    void command;
    void progress;
    void reference;
    void status;
    void statusMessage;
}

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (id)init;

@end
