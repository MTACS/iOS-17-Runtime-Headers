
@interface SXComponentAnchor : NSObject <SXComponentAnchor> {
    long long  _originAnchorPosition;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    long long  _targetAnchorPosition;
    NSString * _targetComponentIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long originAnchorPosition;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (readonly) Class superclass;
@property (nonatomic) long long targetAnchorPosition;
@property (nonatomic, readonly) NSString *targetComponentIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTargetComponentIdentifier:(id)arg1;
- (long long)originAnchorPosition;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setOriginAnchorPosition:(long long)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTargetAnchorPosition:(long long)arg1;
- (long long)targetAnchorPosition;
- (id)targetComponentIdentifier;

@end
