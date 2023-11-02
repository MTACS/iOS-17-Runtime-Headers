
@interface BWDataBufferPool : NSObject {
    NSDictionary * _additionalDataBufferAttributes;
    unsigned long long  _capacity;
    bool  _clientProvidesPool;
    struct __CVDataBufferPool { } * _dataBufferPool;
    NSDictionary * _dataBufferPoolAuxAttributes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataBufferPoolConfigurationLock;
    int  _dataBufferPoolCreateError;
    <BWDataBufferBackedFormat> * _format;
    NSString * _name;
}

@property (nonatomic, readonly) unsigned long long capacity;
@property (nonatomic, readonly) struct __CVDataBufferPool { }*cvDataBufferPool;
@property (nonatomic, readonly) struct __CFDictionary { }*cvDataBufferPoolAuxAttributes;
@property (nonatomic, readonly) unsigned int dataFormat;
@property (readonly) NSString *name;

+ (void)initialize;

- (unsigned long long)capacity;
- (struct __CVDataBufferPool { }*)cvDataBufferPool;
- (struct __CFDictionary { }*)cvDataBufferPoolAuxAttributes;
- (unsigned int)dataFormat;
- (void)dealloc;
- (void)enumerateSurfacesUsingBlock:(id /* block */)arg1;
- (void)flushToMinimumCapacity:(unsigned long long)arg1;
- (id)initWithFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(bool)arg4;
- (id)name;
- (struct __CVBuffer { }*)newDataBuffer;
- (void)prefetchWithCompletionHandler:(id /* block */)arg1;
- (void)setCVDataBufferPool:(struct __CVDataBufferPool { }*)arg1 attributes:(struct __CFDictionary { }*)arg2;
- (void)setCapacity:(unsigned long long)arg1;

@end
