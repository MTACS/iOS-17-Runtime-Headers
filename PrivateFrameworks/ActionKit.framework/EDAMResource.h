
@interface EDAMResource : FATObject {
    NSNumber * _active;
    EDAMData * _alternateData;
    EDAMResourceAttributes * _attributes;
    EDAMData * _data;
    NSNumber * _duration;
    NSString * _guid;
    NSNumber * _height;
    NSString * _mime;
    NSString * _noteGuid;
    EDAMData * _recognition;
    NSNumber * _updateSequenceNum;
    NSNumber * _width;
}

@property (nonatomic, retain) NSNumber *active;
@property (nonatomic, retain) EDAMData *alternateData;
@property (nonatomic, retain) EDAMResourceAttributes *attributes;
@property (nonatomic, retain) EDAMData *data;
@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic, retain) NSNumber *height;
@property (nonatomic, retain) NSString *mime;
@property (nonatomic, retain) NSString *noteGuid;
@property (nonatomic, retain) EDAMData *recognition;
@property (nonatomic, retain) NSNumber *updateSequenceNum;
@property (nonatomic, retain) NSNumber *width;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)active;
- (id)alternateData;
- (id)attributes;
- (id)data;
- (id)duration;
- (id)guid;
- (id)height;
- (id)mime;
- (id)noteGuid;
- (id)recognition;
- (void)setActive:(id)arg1;
- (void)setAlternateData:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setMime:(id)arg1;
- (void)setNoteGuid:(id)arg1;
- (void)setRecognition:(id)arg1;
- (void)setUpdateSequenceNum:(id)arg1;
- (void)setWidth:(id)arg1;
- (id)updateSequenceNum;
- (id)width;

@end
