
@interface GDViewUpdateSourceRequest : NSObject <NSSecureCoding> {
    GDSourceListenerConfigIdentifier * _configIdentifier;
    NSData * _initialBookmark;
    NSData * _latestBookmark;
    GDViewUpdateSourceInfo * _sourceInfo;
    NSString * _state;
    bool  _triggered;
}

@property (nonatomic, readonly) GDSourceListenerConfigIdentifier *configIdentifier;
@property (nonatomic, readonly) NSData *initialBookmark;
@property (nonatomic, retain) NSData *latestBookmark;
@property (nonatomic, readonly) GDViewUpdateSourceInfo *sourceInfo;
@property (nonatomic, readonly) NSString *state;
@property (nonatomic, readonly) bool triggered;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigIdentifier:(id)arg1 initialBookmark:(id)arg2 latestBookmark:(id)arg3 state:(id)arg4 triggered:(bool)arg5;
- (id)initialBookmark;
- (id)latestBookmark;
- (void)setLatestBookmark:(id)arg1;
- (id)sourceInfo;
- (id)state;
- (bool)triggered;

@end
