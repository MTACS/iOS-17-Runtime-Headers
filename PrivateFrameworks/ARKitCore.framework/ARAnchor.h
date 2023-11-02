
@interface ARAnchor : NSObject <ARAnchorCopying, ARDaemonSecureCoding, NSSecureCoding> {
    NSUUID * _identifier;
    bool  _isHiddenFromPublicDelegate;
    double  _lastUpdateTimestamp;
    NSString * _name;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _referenceTransform;
    NSUUID * _sessionIdentifier;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transform;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) bool isHiddenFromPublicDelegate;
@property (nonatomic) double lastUpdateTimestamp;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } referenceTransform;
@property (nonatomic, retain) NSUUID *sessionIdentifier;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInit:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 name:(id)arg3;
- (id)_description:(bool)arg1;
- (id)copyWithTrackedState:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAnchor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)initWithIdentifier:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 name:(id)arg3;
- (id)initWithIdentifier:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 name:(id)arg3 hiddenFromPublicDelegate:(bool)arg4;
- (id)initWithName:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)initWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAnchor:(id)arg1;
- (bool)isHiddenFromPublicDelegate;
- (double)lastUpdateTimestamp;
- (id)name;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })referenceTransform;
- (id)sessionIdentifier;
- (void)setLastUpdateTimestamp:(double)arg1;
- (void)setReferenceTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;
- (void)updateTransformToCoordinateSpace:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 withTimestamp:(double)arg2;

@end
