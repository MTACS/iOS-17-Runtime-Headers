
@interface JDDepthAndImageProcessor : NSObject {
    JDCameraCalibrationData * _imageCalibrationData;
    bool  _pointCloudFiltering;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _pointCloudToImageTransform;
    bool  _retainImagesRemovedFromQueue;
    struct TimeSync { 
        struct deque<TimeSync::TimestampedObject<JDPointCloud *>, std::allocator<TimeSync::TimestampedObject<JDPointCloud *>>> { 
            struct __split_buffer<TimeSync::TimestampedObject<JDPointCloud *> *, std::allocator<TimeSync::TimestampedObject<JDPointCloud *> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<TimeSync::TimestampedObject<JDPointCloud *> **, std::allocator<TimeSync::TimestampedObject<JDPointCloud *> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<TimeSync::TimestampedObject<JDPointCloud *>>> { 
                unsigned long long __value_; 
            } __size_; 
        } m_pointClouds; 
        struct deque<TimeSync::TimestampedObject<TimeSync::Image>, std::allocator<TimeSync::TimestampedObject<TimeSync::Image>>> { 
            struct __split_buffer<TimeSync::TimestampedObject<TimeSync::Image> *, std::allocator<TimeSync::TimestampedObject<TimeSync::Image> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<TimeSync::TimestampedObject<TimeSync::Image> **, std::allocator<TimeSync::TimestampedObject<TimeSync::Image> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<TimeSync::TimestampedObject<TimeSync::Image>>> { 
                unsigned long long __value_; 
            } __size_; 
        } m_images; 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } m_lock; 
        int m_numberOfBanksToMatch; 
    }  _sync;
}

@property (nonatomic, retain) JDCameraCalibrationData *imageCalibrationData;
@property int numberOfPointCloudsPerImage;
@property bool pointCloudFiltering;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } pointCloudToImageTransform;
@property bool retainImagesRemovedFromQueue;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)checkSyncResults:(struct PushResults { struct __CVBuffer {} *x1; struct __CFDictionary {} *x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; int x4; id x5[4]; struct { long long x_6_1_1; int x_6_1_2; unsigned int x_6_1_3; long long x_6_1_4; } x6[4]; int x7; struct __CVBuffer {} *x8[2]; struct { long long x_9_1_1; int x_9_1_2; unsigned int x_9_1_3; long long x_9_1_4; } x9[2]; }*)arg1;
- (id)imageCalibrationData;
- (id)initWithImageCameraCalibration:(id)arg1;
- (id)initWithPointCloudToImageTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 imageCameraCalibration:(id)arg2;
- (int)numberOfPointCloudsPerImage;
- (bool)pointCloudFiltering;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })pointCloudToImageTransform;
- (id)purgeAllQueuedImages;
- (id)pushImage:(id)arg1;
- (id)pushPointCloud:(id)arg1;
- (bool)retainImagesRemovedFromQueue;
- (void)setImageCalibrationData:(id)arg1;
- (void)setNumberOfPointCloudsPerImage:(int)arg1;
- (void)setPointCloudFiltering:(bool)arg1;
- (void)setRetainImagesRemovedFromQueue:(bool)arg1;

@end
