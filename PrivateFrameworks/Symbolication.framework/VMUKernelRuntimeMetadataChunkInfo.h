
@interface VMUKernelRuntimeMetadataChunkInfo : NSObject {
    bool  isMetaclass;
    VMUClassInfo * owningClassInfo;
    unsigned int  type;
}

- (void).cxx_destruct;

@end
