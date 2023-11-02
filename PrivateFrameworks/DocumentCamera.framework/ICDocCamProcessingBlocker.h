
@interface ICDocCamProcessingBlocker : NSObject {
    NSMutableSet * _blockerSet;
    <ICDocCamProcessingBlockerDelegate> * _delegate;
}

@property (nonatomic, retain) NSMutableSet *blockerSet;
@property (nonatomic) <ICDocCamProcessingBlockerDelegate> *delegate;

- (void).cxx_destruct;
- (void)addBlockerOfType:(id)arg1 clearRectangles:(bool)arg2 clearQueue:(bool)arg3;
- (bool)blocked;
- (id)blockerSet;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)removeBlockerOfType:(id)arg1;
- (void)setBlockerSet:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
