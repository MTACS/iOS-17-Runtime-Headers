
@interface ARQLInlineTouch : NSObject <ASVTouch, NSSecureCoding> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _cgLocation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _cgPreviousLocation;
    long long  _phase;
    double  _timestamp;
    NSString * _uid;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } cgLocation;
@property (nonatomic) struct CGPoint { double x1; double x2; } cgPreviousLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) void location;
@property (nonatomic) long long phase;
@property (nonatomic, readonly) long long phase;
@property (nonatomic, readonly) void previousLocation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic) double timestamp;
@property (nonatomic, copy) NSString *uid;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

+ (void)removeUIDForUITouch:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)touchToUUIDMapping;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })cgLocation;
- (struct CGPoint { double x1; double x2; })cgPreviousLocation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUITouch:(id)arg1;
- (long long)phase;
- (void)setCgLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCgPreviousLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPhase:(long long)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setUid:(id)arg1;
- (double)timestamp;
- (id)uid;
- (id)uuidForTouch:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer

- (void)location;
- (void)previousLocation;

@end
