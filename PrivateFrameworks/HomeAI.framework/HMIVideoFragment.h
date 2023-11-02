
@interface HMIVideoFragment : HMFObject <HMFLogging, NSSecureCoding> {
    bool  _attributesLoaded;
    struct opaqueCMFormatDescription { } * _audioFormatDescription;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _audioTrackTimeRange;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _baseDecodeTimeStamp;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _firstVideoSampleByteRange;
    bool  _frameReorderingRequired;
    NSData * _initializationSegment;
    NSData * _separableSegment;
    NSArray * _sequenceNumbers;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _timeRange;
    struct opaqueCMFormatDescription { } * _videoFormatDescription;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _videoTrackTimeRange;
}

@property (readonly) struct opaqueCMFormatDescription { }*audioFormatDescription;
@property (readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } audioTrackTimeRange;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } baseDecodeTimeStamp;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } firstVideoSampleByteRange;
@property (readonly) bool frameReorderingRequired;
@property (readonly) unsigned long long hash;
@property (readonly) NSData *initializationSegment;
@property (readonly, copy) NSData *sanitizedData;
@property (readonly, copy) NSData *sanitizedSeperableSegment;
@property (readonly) NSData *separableSegment;
@property (readonly) unsigned long long sequenceNumber;
@property (readonly) NSArray *sequenceNumbers;
@property (readonly) Class superclass;
@property (readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property (readonly) struct opaqueCMFormatDescription { }*videoFormatDescription;
@property (readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } videoTrackTimeRange;

+ (bool)canFragmentData:(id)arg1;
+ (void)fragmentData:(id)arg1 handler:(id /* block */)arg2;
+ (bool)isInitializationSegment:(id)arg1 combinableWithInitializationSegment:(id)arg2;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_ensureAttributes;
- (id)attributeDescriptions;
- (struct opaqueCMFormatDescription { }*)audioFormatDescription;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })audioTrackTimeRange;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })baseDecodeTimeStamp;
- (id)data;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)encodeWithCoder:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })firstVideoSampleByteRange;
- (bool)frameReorderingRequired;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (id)initWithFragments:(id)arg1;
- (id)initWithInitializationSegment:(id)arg1 separableSegment:(id)arg2;
- (id)initWithInitializationSegment:(id)arg1 separableSegment:(id)arg2 sequenceNumbers:(id)arg3;
- (id)initWithInitializationSegment:(id)arg1 separableSegment:(id)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (id)initWithInitializationSegment:(id)arg1 separableSegment:(id)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 firstVideoSampleByteRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)initWithInitializationSegment:(id)arg1 separableSegment:(id)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 sequenceNumbers:(id)arg4;
- (id)initWithInitializationSegment:(id)arg1 separableSegment:(id)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 sequenceNumbers:(id)arg4 firstVideoSampleByteRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (id)initializationSegment;
- (bool)isCombinableWithFragment:(id)arg1;
- (id)placeholderCopy;
- (id)redactedCopy;
- (id)redactedCopyWithMetadata;
- (id)sanitizedData;
- (id)sanitizedSeperableSegment;
- (id)separableSegment;
- (unsigned long long)sequenceNumber;
- (id)sequenceNumbers;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (struct opaqueCMFormatDescription { }*)videoFormatDescription;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })videoTrackTimeRange;

@end
