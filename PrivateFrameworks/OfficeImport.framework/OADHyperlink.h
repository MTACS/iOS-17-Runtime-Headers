
@interface OADHyperlink : NSObject {
    NSString * mAction;
    bool  mDoAddToHistory;
    bool  mDoEndSound;
    NSString * mInvalidUrl;
    bool  mIsVisited;
    NSString * mTargetFrame;
    NSURL * mTargetLocation;
    int  mTargetMode;
    NSString * mTooltip;
}

@property (nonatomic) bool doAddToHistory;
@property (nonatomic) bool doEndSound;
@property (nonatomic) bool isVisited;

- (void).cxx_destruct;
- (id)action;
- (id)description;
- (bool)doAddToHistory;
- (bool)doEndSound;
- (unsigned long long)hash;
- (id)init;
- (id)invalidUrl;
- (bool)isEqual:(id)arg1;
- (bool)isVisited;
- (void)setAction:(id)arg1;
- (void)setDoAddToHistory:(bool)arg1;
- (void)setDoEndSound:(bool)arg1;
- (void)setInvalidUrl:(id)arg1;
- (void)setIsVisited:(bool)arg1;
- (void)setTargetFrame:(id)arg1;
- (void)setTargetLocation:(id)arg1;
- (void)setTargetMode:(int)arg1;
- (void)setTooltip:(id)arg1;
- (id)targetFrame;
- (id)targetLocation;
- (int)targetMode;
- (id)tooltip;

@end
