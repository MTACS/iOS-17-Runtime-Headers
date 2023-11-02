
@interface BWInferenceCompressibleLazyVideoRequirement : BWInferenceLazyVideoRequirement {
    BWInferenceLazyVideoRequirement * _underlyingLazyVideoRequirement;
}

- (void)dealloc;
- (id)initWithAttachedMediaKey:(id)arg1 preparedByAttachedMediaKey:(id)arg2 count:(unsigned long long)arg3 videoFormatProvider:(id /* block */)arg4;
- (id)initWithLazyVideoRequirement:(id)arg1;
- (int)prepareForInputInferenceVideoFormat:(id)arg1;

@end
