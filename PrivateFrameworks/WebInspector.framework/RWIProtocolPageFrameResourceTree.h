
@interface RWIProtocolPageFrameResourceTree : RWIProtocolJSONObject

@property (nonatomic, copy) NSArray *childFrames;
@property (nonatomic, retain) RWIProtocolPageFrame *frame;
@property (nonatomic, copy) NSArray *resources;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)childFrames;
- (id)frame;
- (id)initWithFrame:(id)arg1 resources:(id)arg2;
- (id)resources;
- (void)setChildFrames:(id)arg1;
- (void)setFrame:(id)arg1;
- (void)setResources:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithFrame:(id)arg1 resources:(id)arg2;

@end
