
@interface VisualIntelligence.UnifiedModelFactory : VisualIntelligence.DomainModelRequestFactory {
    void coreMLModelProvider;
    void mlEngineType;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  modelInfo;
    void postProcessor;
}

@end
