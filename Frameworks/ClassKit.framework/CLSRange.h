
@interface CLSRange : CLSObject <CLSRelationable> {
    double  _end;
    double  _start;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double delta;
@property (readonly, copy) NSString *description;
@property (nonatomic) double end;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *parentObjectID;
@property (nonatomic) double start;
@property (readonly) Class superclass;

+ (id)compressOverlappingRanges:(id)arg1;
+ (id)relations;
+ (bool)supportsSecureCoding;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)delta;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (double)end;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(id)arg1;
- (id)initWithStart:(double)arg1 end:(double)arg2;
- (void)mergeWithRange:(id)arg1;
- (bool)overlapsWith:(id)arg1;
- (void)setEnd:(double)arg1;
- (void)setStart:(double)arg1;
- (double)start;
- (bool)validateObject:(id*)arg1;

@end
